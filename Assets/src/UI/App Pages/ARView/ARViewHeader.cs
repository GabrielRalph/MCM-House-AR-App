using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class ARViewHeader : FlexElement{
  public FlexElement Logo;
  public FlexElement Back;
  public FlexGrid ButtonsBox;


  public override float HeightFromWidth(float width) {
    DefaultPivot();
    DefaultAnchors();

    //Set logo to width of header
    Logo.Width = width;
    float height = Logo.Height;




    //Set back button height to height of logo, align center left
    Back.DefaultPivot();
    Back.DefaultAnchors();
    Back.Height = height;
    Back.Pos = new Vector2(0,0);
    Back.SetPivot(0, 0.5f);
    Back.SetAnchors(0, 0.5f);

    //Set button box's width to 3 halves of the logo height, align top right
    ButtonsBox.DefaultPivot();
    ButtonsBox.DefaultAnchors();
    float boxWidth = 3*height/2;
    ButtonsBox.Width = boxWidth;
    ButtonsBox.Pos = new Vector2(0, height/4);
    ButtonsBox.SetPivot(1, 1);
    ButtonsBox.SetAnchors(1, 1);

    //Allign to center top of parent
    Pos = new Vector2(0,0);
    SetPivot(0.5f, 1);
    SetAnchors(0.5f, 1);

    //Total height, the height of the logo
    return height;
  }

  //Set width screen width
  void Update(){
    Width = Screen.width;

  }
}
