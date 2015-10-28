/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentImageLoadingOperation : NSOperation {
    NSCache *_cache;
    NSMutableArray *_completionHandlers;
    NSURL *_mediaURL;
    NSString *_typeUTI;
}

@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic, retain) NSURL *mediaURL;
@property (nonatomic, retain) NSString *typeUTI;

- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)arg1;
- (id)cache;
- (id)completionHandlers;
- (id)initWithCache:(id)arg1 mediaURL:(id)arg2 typeUTI:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)main;
- (id)mediaURL;
- (void)setCache:(id)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setTypeUTI:(id)arg1;
- (id)typeUTI;

@end