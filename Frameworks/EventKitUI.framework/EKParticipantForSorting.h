/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, EKParticipant;

@interface EKParticipantForSorting : NSObject  {
    EKParticipant *_participant;
    BOOL _isEmail;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_cachedDisplayName;
}


- (BOOL)isEmail;
- (id)lastName;
- (id)firstName;
- (id)displayName;
- (int)compare:(id)arg1;
- (id)participant;
- (id)initWithEKParticipant:(id)arg1;
- (id)description;
- (void)dealloc;

@end