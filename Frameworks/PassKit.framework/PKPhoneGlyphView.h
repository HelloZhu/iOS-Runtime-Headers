/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class CALayer, NSString;

@interface PKPhoneGlyphView : PKMicaView {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    CALayer *_highlightLayer;
    } _highlightOffscreenPosition;
    } _highlightOnscreenPosition;
    NSString *_phoneWiggleAnimationKey;
}

- (void)_endPhoneWiggle;
- (void)_startPhoneWiggle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 package:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;

@end