/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVRefreshSubscriptionRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext * _authenticationContext;
    BOOL  _requestingOfflineSlot;
}

@property (nonatomic, copy) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isRequestingOfflineSlot, nonatomic) BOOL requestingOfflineSlot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)authenticationContext;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isRequestingOfflineSlot;
- (void)setAuthenticationContext:(id)arg1;
- (void)setRequestingOfflineSlot:(BOOL)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
