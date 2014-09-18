/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class <SiriUISuggestionsViewDelegate>, NSArray, NSMutableOrderedSet, NSString, NSTimer, SiriUIAcousticIDSpinner, UIColor, UILabel;

@interface SiriUISuggestionsView : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    SiriUIAcousticIDSpinner *_acousticIDSpinner;
    } _contentOffset;
    <SiriUISuggestionsViewDelegate> *_delegate;
    UILabel *_headerLabel;
    NSString *_headerText;
    UILabel *_oldHeaderLabel;
    NSArray *_oldSuggestionLabels;
    long long _orientation;
    NSMutableOrderedSet *_pendedSuggestions;
    UILabel *_subheaderLabel;
    NSString *_subheaderText;
    NSArray *_suggestionLabels;
    UIColor *_textColor;
    NSTimer *_updateSuggestionsTimer;
    bool_firstSuggestionPresentation;
}

@property struct CGPoint { double x1; double x2; } contentOffset;
@property <SiriUISuggestionsViewDelegate> * delegate;
@property(copy) NSString * headerText;
@property long long orientation;
@property(copy) NSString * subheaderText;
@property(copy) UIColor * textColor;

- (void).cxx_destruct;
- (void)_animateHeaderIn;
- (void)_animateHeaderOut;
- (void)_animateInSuggestionAtIndex:(unsigned long long)arg1;
- (void)_animateOutSuggestionAtIndex:(unsigned long long)arg1;
- (double)_headerFontSize;
- (double)_headerToSubheaderOffset;
- (int)_heightType;
- (bool)_isPortrait;
- (void)_loadSubheaderViewIfNeeded;
- (void)_loadSuggestionsViewsIfNeeded;
- (unsigned long long)_numberOfSuggestionsToDisplay;
- (void)_reallyShowAcousticIDSpinner;
- (void)_setSuggestionTexts:(id)arg1;
- (double)_subheaderFontSize;
- (double)_suggestionFontSize;
- (double)_suggestionSpacing;
- (void)_updateSuggestions;
- (double)_updateSuggestionsDelay;
- (void)acousticIDSpinnerDidHide:(id)arg1;
- (void)animateOutWithCompletion:(id)arg1;
- (void)clearCurrentSuggestions;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)delegate;
- (id)headerText;
- (void)hideAcousticIDSpinner;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setSubheaderText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)showAcousticIDSpinner;
- (void)startSuggesting;
- (void)stopSuggesting;
- (id)subheaderText;
- (id)textColor;

@end