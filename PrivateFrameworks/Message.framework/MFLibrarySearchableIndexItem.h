/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndexItem : NSObject {
    NSData *_bodyData;
    BOOL _hasCompleteBodyData;
    NSString *_identifier;
    MFMailMessage *_message;
}

@property (nonatomic, retain) NSData *bodyData;
@property (nonatomic, readonly, copy) NSString *domainIdentifier;
@property (nonatomic) BOOL hasCompleteBodyData;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, retain) MFMailMessage *message;
@property (nonatomic, readonly, retain) CSSearchableItem *searchableItem;

+ (id)itemWithMessage:(id)arg1 bodyData:(id)arg2;
+ (id)transactionAttributeKey;

- (BOOL)_isMessagePartOfExistingThreadWithHeaders:(id)arg1;
- (id)bodyData;
- (int)compare:(id)arg1;
- (void)dealloc;
- (id)domainIdentifier;
- (BOOL)hasCompleteBodyData;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithMessage:(id)arg1 bodyData:(id)arg2;
- (id)message;
- (id)searchableItem;
- (id)searchableItemWithClientState:(id)arg1;
- (void)setBodyData:(id)arg1;
- (void)setHasCompleteBodyData:(BOOL)arg1;

@end
