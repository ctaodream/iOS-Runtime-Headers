/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification> {
    NSXPCConnection *_connection;
    NSMutableDictionary *_endpoints;
    NSArray *_slotNames;
    NSObject<OS_dispatch_queue> *_slotNamesQueue;
}

@property (readonly) NSArray *slotNames;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)getSlotWithName:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(id /* block */)arg4;
- (id)slotNames;

@end
