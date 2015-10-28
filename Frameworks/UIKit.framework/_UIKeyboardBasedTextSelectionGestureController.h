/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController {
    BOOL _delayForceMagnify;
    BOOL _didLongForcePress;
}

@property (nonatomic) BOOL delayForceMagnify;
@property (nonatomic) BOOL didLongForcePress;

+ (id)sharedInstance;

- (void)_cleanupDeadGesturesIfNecessary;
- (BOOL)allowOneFingerDeepPress;
- (BOOL)delayForceMagnify;
- (BOOL)didLongForcePress;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)oneFingerForcePan:(id)arg1;
- (void)oneFingerForcePress:(id)arg1;
- (double)oneFingerForcePressMinimumDuration;
- (BOOL)oneFingerForcePressShouldFailWithoutForce;
- (void)setDelayForceMagnify:(BOOL)arg1;
- (void)setDidLongForcePress:(BOOL)arg1;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint { float x1; float x2; })arg1 viaDrag:(BOOL)arg2;

@end