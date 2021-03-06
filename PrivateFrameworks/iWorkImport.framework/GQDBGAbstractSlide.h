/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDBGAbstractSlide : NSObject {
    GQDBGBodyPlaceholder * mBodyPlaceholder;
    BOOL  mCallGenerator;
    BOOL  mHidden;
    char * mID;
    GQDBGObjectPlaceholder * mObjectPlaceholder;
    GQDBGSlideNumberPlaceholder * mSlideNumberPlaceholder;
    GQDSStyle * mSlideStyle;
    GQDSStylesheet * mStylesheet;
    GQDBGTitlePlaceholder * mTitlePlaceholder;
}

- (char *)ID;
- (void)dealloc;
- (BOOL)isHidden;
- (int)readAttributesForSlide:(struct _xmlTextReader { }*)arg1;
- (id)slideStyle;
- (id)stylesheet;

@end
