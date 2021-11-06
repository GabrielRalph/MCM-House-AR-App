using UnityEngine.UI;
using UnityEngine;
using System;

#if UNITY_IOS
  using DeadMosquito.IosGoodies;
#elif UNITY_ANDROID
  using DeadMosquito.AndroidGoodies;
#endif


public enum HEvent{
  Select,
  Deleted,
  Delete,
  Click,
  Warning,
  Error,
  Success,
}


public class NativeAid {
  public static long[] warning_pattern = {500, 300, 500, 300, 500};
  public static int[] warning_amplitude = {170, 0, 170, 0, 170};

  public static long[] error_pattern = {700, 500, 700, 500, 1000};
  public static int[] error_amplitude = {200, 0, 200, 0, 200, 0, 250};

  public static long[] success_pattern = {1000, 200, 500, 200, 500};
  public static int[] success_amplitude = {200, 0, 200, 0, 200};

  public static void SavePhoto(Texture2D texture){
    #if UNITY_IOS
      IGImagePicker.SaveImageToGallery(texture);
    #elif UNITY_ANDROID
      string imageTitle = "mcm house ar " + System.DateTime.Now.ToString("yy-MM-dd-hh-mm-ss");
      const string folderName = "mcm house ar screenshots";
      AGGallery.SaveImageToGallery(texture, imageTitle, folderName, ImageFormat.JPEG);
    #endif
  }

  public static void HapticEvent(HEvent e) {
    #if UNITY_IOS
      bool available = IGHapticFeedback.IsHapticFeedbackSupported;
    #elif UNITY_ANDROID
      bool available = AGVibrator.HasVibrator();
    #endif

    if (!available) return;

    switch(e) {
      case HEvent.Select:
        #if UNITY_IOS
          IGHapticFeedback.SelectionChanged();
        #elif UNITY_ANDROID
          AGVibrator.Vibrate(VibrationEffect.CreateOneShot(400, 120));
        #endif
        break;

      case HEvent.Delete:
        #if UNITY_IOS
          IGHapticFeedback.ImpactOccurred(IGHapticFeedback.ImpactType.Medium);
        #elif UNITY_ANDROID
          AGVibrator.Vibrate(VibrationEffect.CreateOneShot(600, 170));
        #endif
        break;

      case HEvent.Deleted:
        #if UNITY_IOS
          IGHapticFeedback.ImpactOccurred(IGHapticFeedback.ImpactType.Heavy);
        #elif UNITY_ANDROID
          AGVibrator.Vibrate(VibrationEffect.CreateOneShot(600, 250));
        #endif
        break;

      case HEvent.Click:
        #if UNITY_IOS
          IGHapticFeedback.ImpactOccurred(IGHapticFeedback.ImpactType.Light);
        #elif UNITY_ANDROID
          AGVibrator.Vibrate(VibrationEffect.CreateOneShot(300, 100));
        #endif
        break;

      case HEvent.Error:
        #if UNITY_IOS
          IGHapticFeedback.NotificationOccurred(IGHapticFeedback.NotificationType.Error);
        #elif UNITY_ANDROID
          AGVibrator.Vibrate(VibrationEffect.CreateWaveForm(error_pattern, error_amplitude, -1));
        #endif
        break;

      case HEvent.Warning:
        #if UNITY_IOS
          IGHapticFeedback.NotificationOccurred(IGHapticFeedback.NotificationType.Warning);
        #elif UNITY_ANDROID
          AGVibrator.Vibrate(VibrationEffect.CreateWaveForm(warning_pattern, warning_amplitude, -1));
        #endif
        break;

      case HEvent.Success:
        #if UNITY_IOS
          IGHapticFeedback.NotificationOccurred(IGHapticFeedback.NotificationType.Success);
        #elif UNITY_ANDROID
          AGVibrator.Vibrate(VibrationEffect.CreateWaveForm(success_pattern, success_amplitude, -1));
        #endif
        break;
    }
  }
}
