/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSMutableDictionary;

@interface PKKeychainItemWrapper : NSObject {
    NSMutableDictionary *genericPasswordQuery;
    NSMutableDictionary *keychainItemData;
}

@property(retain) NSMutableDictionary * genericPasswordQuery;
@property(retain) NSMutableDictionary * keychainItemData;

- (void)dealloc;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (id)genericPasswordQuery;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2;
- (id)keychainItemData;
- (id)objectForKey:(id)arg1;
- (void)resetKeychainItem;
- (id)secItemFormatToDictionary:(id)arg1;
- (void)setGenericPasswordQuery:(id)arg1;
- (void)setKeychainItemData:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)writeToKeychain;

@end