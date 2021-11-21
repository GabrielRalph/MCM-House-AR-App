using UnityEngine;
using System;
using UnityEngine.UI;


public class Search : Collapsable{
  public InputField Field;
  public Text placeholder;
  public FlexElement Icon;
  public ClickBox CancelClickBox;
  public ClickBox ToggleButton;
  public Hamburger Hamburger;
  public App App;

  public void Hide(){
    Field.text = "";
    Hidden = true;
  }

  public void Show(){
    if (Hamburger != null && !Hamburger.Hidden){
      Hamburger.Hide();
    }
    Field.text = "";
    Hidden = false;
  }

  public void Toggle(){
    if (Hidden) Show();
    else if (Field.text.Length > 0) {
      MoveSearch();
    } else {
      Hide();
    }
  }

  void MoveSearch(){
    string phrase = Field.text;
    if (placeholder.text.Length > 0) {
      phrase = placeholder.text;
    }
    App.MoveToProductsSearch(phrase);
  }

  void Awake() {
    if (CancelClickBox != null) {
      CancelClickBox.OnClick = Hide;
    }
    if (ToggleButton != null) ToggleButton.OnClick = Toggle;
    if (App != null) {
      App.AddEventListener("beforeshow", Hide);

      Field.onEndEdit.AddListener(delegate {
        if (Input.GetKey("enter") || Input.GetKey("return")){
          MoveSearch();
        } else if (Field.touchScreenKeyboard != null && Field.touchScreenKeyboard.done) {
          MoveSearch();
        }
      });

      Field.onValueChange.AddListener(delegate {
        string suggestion = App.Assets.SearchDictionary.Suggestion(Field.text);
        placeholder.text = suggestion;
      });
    }
  }



  void Update(){
    if (Field.text.Length == 0) {
      placeholder.text = "Search";
    }
    Field.readOnly = Locked;
    if (Icon != null) {
      Padding pad = PaddingVW.Mul(Screen.width / 100);
      Icon.Height = Element.Height - pad.x;
    }
  }
}
