using System;
using UnityEngine;
using UnityEngine.UI;

public class Flash : MonoBehaviour{
  public bool flash;
  public bool hold;

  public float flashAcceleration = 0.01f;
  private float flash_percent = 0;
  private bool flash_ended = true;
  private float flash_vel = 0;

  private Image image;

  public void Start(){
    flash = true;
  }

  void Update(){
    if (image == null) image = GetComponent<Image>();
    if (image == null) return;

    if (flash) {
      flash = false;
      flash_percent = 0;
      flash_vel = 0;
      flash_ended = false;
    } else if (!flash_ended) {
      if (!hold || flash_vel >= 0){
        flash_vel += flashAcceleration;
        flash_percent += flash_vel;
      }

      if (flash_percent > 1) {
        flash_percent = 1;
        flash_vel += flashAcceleration;
        flash_vel *= -1;
      } else if (flash_percent < 0) {
        flash_percent = 0;
        flash_ended = true;
      }
    }

    Color c = image.color;
    c.a = flash_percent;
    image.color = c;
  }
}
