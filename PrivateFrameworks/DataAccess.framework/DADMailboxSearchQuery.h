/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSDate, NSString;



@interface DADMailboxSearchQuery : DADSearchQuery 
{
    NSString *_collectionID;
    NSInteger _bodyType;
    long long _truncationSize;
    BOOL _allOrNone;
    NSDate *_priorToDate;
    NSInteger _MIMESupport;
    BOOL _deepTraversal;
    BOOL _rebuildResults;
}

@property BOOL rebuildResults;
@property BOOL deepTraversal;
@property NSInteger MIMESupport;
@property(retain) NSDate *priorToDate;
@property BOOL allOrNone;
@property long long truncationSize;
@property NSInteger bodyType;
@property(retain) NSString *collectionID;

+ (id)mailboxSearchQueryWithSearchString:(id)arg1;

- (BOOL)isEqualToDADMailboxSearchQuery:(id)arg1;
- (void)setRebuildResults:(BOOL)arg1;
- (void)setDeepTraversal:(BOOL)arg1;
- (void)setAllOrNone:(BOOL)arg1;
- (id)initWithSearchString:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)setBodyType:(NSInteger)arg1;
- (void)setCollectionID:(id)arg1;
- (void)setMIMESupport:(NSInteger)arg1;
- (void)setTruncationSize:(long long)arg1;
- (void)setPriorToDate:(id)arg1;
- (NSInteger)bodyType;
- (id)collectionID;
- (id)priorToDate;
- (long long)truncationSize;
- (BOOL)allOrNone;
- (BOOL)deepTraversal;
- (BOOL)rebuildResults;
- (NSInteger)MIMESupport;

@end