using UnityEngine;
using System;
using System.Collections.Generic;
using UnityEngine.UI;

public class CarouselTester : MonoBehaviour {
  public InputField SnapSpeed;
  public InputField Decay;
  public FlexCarousel Carousel;

  void Awake(){
    SnapSpeed.text = ""+Carousel.SnapSpeed;
    Decay.text = ""+Carousel.Decay;
    SnapSpeed.onValueChanged.AddListener((value) => {
      Carousel.SnapSpeed = float.Parse(value);
    });
    Decay.onValueChanged.AddListener((value) => {
      Carousel.Decay = float.Parse(value);
    });
  }
}
