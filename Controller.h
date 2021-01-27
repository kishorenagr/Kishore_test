@class FISound;

@interface Controller : UIViewController

@property(strong) FISound *sound;

- (IBAction) playSound;
- (IBAction) stopSound;

- (IBAction) updateSoundPitchFrom: (UISlider*) slider;

@end
  @ comment on the branch Kishore_test for testing conflicts

