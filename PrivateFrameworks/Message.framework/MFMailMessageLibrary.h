/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessageLibrary : MFMessageLibrary <MFContentProtectionObserver, MFLibrarySearchableIndexDataSource, MFSQLiteConnectionPoolDelegate> {
    NSString *_activeAccountClause;
    MFSQLiteConnectionPool *_connectionPool;
    <MFMailMessageLibraryDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_keyBagQueue;
    MFWeakObjectCache *_libraryMessageCache;
    struct __CFDictionary { } *_mailboxCache;
    <MFMailboxPathProvider> *_mailboxPathProvider;
    NSMutableSet *_messagesToThreadAtUnlock;
    MFMailMessageLibraryMigrator *_migrator;
    NSString *_nonLocalAccountClause;
    int _protectedDataAvailability;
    MFDbJournal *_protectedJournal;
    NSObject<OS_dispatch_queue> *_queue;
    MFLibrarySearchableIndex *_searchableIndex;
    NSObject<OS_dispatch_source> *_suspendTimer;
    NSString *_threadLocalHandleKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFMailMessageLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int protectedDataAvailability;
@property (readonly) Class superclass;

+ (void)_removeLibrary:(BOOL)arg1 atPath:(id)arg2;
+ (id)defaultInstance;
+ (id)defaultPath;
+ (void)removeLibraryAtPath:(id)arg1;

- (id)UIDsToDeleteInMailbox:(id)arg1;
- (id)_activeAccountsClause;
- (id)_activeConnection;
- (id)_activeConnectionWithDB:(struct sqlite3 { }*)arg1;
- (id)_activeConnectionWrapper;
- (void)_addMessageToThreadAtUnlock:(unsigned int)arg1;
- (id)_addThreadingInfoWithContext:(id)arg1 usingDatabase:(struct sqlite3 { }*)arg2;
- (id)_assignTransaction:(long long)arg1 forLibraryIDs:(id)arg2 database:(struct sqlite3 { }*)arg3;
- (void)_assignTransaction:(long long)arg1 forSpotlightTombstones:(id)arg2 type:(int)arg3 database:(struct sqlite3 { }*)arg4;
- (unsigned int)_attachmentCountForAggregatedMailboxes:(id)arg1;
- (BOOL)_canSelectMessagesWithOptions:(unsigned int)arg1 db:(struct sqlite3 { }*)arg2;
- (BOOL)_checkpointDatabase;
- (id)_connectionForWriting:(BOOL)arg1;
- (struct __CFDictionary { }*)_copyReferenceHashesWithoutMessagesForMessageWithConversation:(id)arg1;
- (id)_firstDateForQuery:(id)arg1 inMailbox:(id)arg2;
- (unsigned int)_flaggedCountForAggregatedMailboxes:(id)arg1;
- (id)_foundSampleSetForSubjects:(id)arg1 foundSubjects:(id*)arg2;
- (id)_getReferencesForHashesWithOwners:(struct __CFDictionary { }*)arg1;
- (void)_handleBusyError;
- (void)_handleCorruptDatabase;
- (void)_handleDetachedDatabaseIOError;
- (void)_handleFailedMigration;
- (void)_handleFullDatabase;
- (void)_handleIOError;
- (void)_handleInvalidDatabaseIOError;
- (void)_handleJournalMergeFailure;
- (void)_handleJournalWriteFailure;
- (void)_handleProtectedDataIOError;
- (void)_handleProtectedDataInconsistencies;
- (void)_handleSQLiteErrorCode:(int)arg1 db:(struct sqlite3 { }*)arg2;
- (unsigned int)_includesMeCountForAggregatedMailboxes:(id)arg1;
- (id)_indexSetOfMessagesDeleted;
- (BOOL)_insertThreadReferences:(id)arg1 toMessageWithLibraryID:(unsigned int)arg2 usingDatabase:(struct sqlite3 { }*)arg3;
- (id)_libraryMessageCache;
- (id)_libraryMessageWithLibraryID:(unsigned int)arg1 wasCached:(BOOL*)arg2;
- (id)_mailboxesClauseForAccounts:(id)arg1;
- (id)_messageForStatement:(struct sqlite3_stmt { }*)arg1 options:(unsigned int)arg2 timestamp:(unsigned long long)arg3 isProtectedDataAvailable:(BOOL)arg4;
- (id)_newConnection;
- (id)_nonLocalAccountsClause;
- (void)_notifyDidCompact:(BOOL)arg1 messages:(id)arg2 mailboxes:(id)arg3;
- (void)_performTransaction:(id /* block */)arg1 forWriting:(BOOL)arg2;
- (struct sqlite3_stmt { }*)_prepareBatchStatement:(struct sqlite3 { }*)arg1 pattern:(id)arg2 libraryIDs:(unsigned int*)arg3 batchSize:(unsigned int)arg4;
- (struct sqlite3_stmt { }*)_prepareBatchStatement:(struct sqlite3 { }*)arg1 pattern:(id)arg2 objects:(id*)arg3 count:(unsigned int)arg4;
- (void)_purgeSpotlightTombstonesBeforeTransaction:(long long)arg1 database:(struct sqlite3 { }*)arg2;
- (id)_queryForMailboxesIDsFromMailboxes:(id)arg1;
- (id)_quotedPrefixLikeSubclauseForColumn:(id)arg1 value:(id)arg2;
- (void)_reconcileAfterKeybagUnlock;
- (void)_reconcileJournal;
- (void)_removeCachedLibraryMessageWithLibraryID:(unsigned int)arg1;
- (void)_resetTransactionIndexForAccount:(id)arg1 mailboxID:(unsigned int)arg2;
- (BOOL)_rollbackToCheckpoint;
- (id)_setActiveConnection:(id)arg1 forWriting:(BOOL)arg2;
- (BOOL)_setMessageData:(id)arg1 libraryID:(unsigned int)arg2 part:(id)arg3 partial:(BOOL)arg4 complete:(BOOL)arg5;
- (void)_setMessageDataString:(id)arg1 forKey:(id)arg2 forMessage:(id)arg3;
- (void)_setProtectedDataAvailabilityState:(int)arg1;
- (id)_stringsForIndexSet:(id)arg1;
- (BOOL)_writeEmlxFile:(id)arg1 withBodyData:(id)arg2 protectionClass:(int)arg3;
- (id)accountForMessage:(id)arg1;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(BOOL)arg9 addPOPUIDs:(BOOL)arg10 dataSectionsByMessage:(id)arg11;
- (long long)addReferenceForContext:(id)arg1 usingDatabase:(struct sqlite3 { }*)arg2 mergeHandler:(id /* block */)arg3;
- (void)addSpotlightTombstones:(id)arg1 type:(int)arg2;
- (id)allMailboxURLStrings;
- (unsigned int)allNonDeleteCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3;
- (id)allUIDsInMailbox:(id)arg1;
- (void)appendOfflineCacheOperation:(id)arg1 forAccount:(int)arg2 lastTemporaryID:(unsigned int)arg3;
- (void)appendOfflineCacheReplayData:(id)arg1 forAccountID:(int)arg2;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (int)attachProtectedDatabase:(struct sqlite3 { }*)arg1;
- (unsigned int)attachmentCountForMailbox:(id)arg1;
- (id)attachmentsDirectoryForLibraryID:(unsigned int)arg1 mailboxID:(unsigned int)arg2;
- (int)beginTransaction:(struct sqlite3 { }*)arg1 withType:(int)arg2;
- (id)bodyDataAtPath:(id)arg1 headerData:(id*)arg2;
- (id)bodyDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3;
- (BOOL)canProvideMinimumRemoteID;
- (void)cancelSuspendTimer;
- (void)checkDataConsistencyWithFailure:(id /* block */)arg1;
- (BOOL)cleanupProtectedTables;
- (void)closeDatabaseConnections;
- (int)commitTransaction:(struct sqlite3 { }*)arg1;
- (void)compactMailbox:(id)arg1;
- (void)compactMessages:(id)arg1 permanently:(BOOL)arg2;
- (void)consumeOfflineCacheReplayDataForAccount:(int)arg1 usingBlock:(id /* block */)arg2;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (id)conversationIDsOfMessagesInSameThreadAsMessageWithLibraryID:(unsigned int)arg1 messageIDHash:(long long)arg2;
- (long long)conversationIdForMessageIds:(id)arg1;
- (id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 forMailbox:(id)arg2;
- (id)copyMessageInfosForMailbox:(id)arg1;
- (id)copyMessageInfosMatchingCriterion:(id)arg1;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inRemoteMailbox:(id)arg3;
- (struct __CFDictionary { }*)copySendersByLibraryIDForConversation:(long long)arg1 mailbox:(id)arg2 limit:(int)arg3;
- (int)countOfMessagesMissingFromThreadContainingMessage:(id)arg1;
- (unsigned int)countOfRelatedMessagesMatchingCriterion:(id)arg1 forConversationsContainingMessagesMatchingCriterion:(id)arg2 forMailboxCriterion:(id)arg3;
- (int)createLibraryIDForAccount:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1 isPartial:(BOOL)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(BOOL)arg3;
- (id)dataForMimePart:(id)arg1 isComplete:(BOOL*)arg2;
- (id)dataPathForMessage:(id)arg1;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)dataPathForMessage:(id)arg1 type:(int)arg2;
- (id)dateOfNewestNonSearchResultMessageInMailbox:(id)arg1;
- (id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)arg1;
- (id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteAccount:(id)arg1;
- (void)deleteDataForMessage:(id)arg1;
- (void)deleteMailboxes:(id)arg1 account:(id)arg2;
- (void)deleteOfflineCacheDataForAccount:(int)arg1;
- (void)deletePOPUID:(id)arg1 inMailbox:(id)arg2;
- (unsigned int)deletedCountForMailbox:(id)arg1;
- (id)deletedUIDsInMailbox:(id)arg1;
- (id)equalToMailboxIDsFromCriterion:(id)arg1;
- (id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned int)arg3;
- (unsigned int)flaggedCountForMailbox:(id)arg1;
- (unsigned long long)flagsForConversationId:(long long)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2;
- (id)getDetailsForAllMessagesFromMailbox:(id)arg1;
- (id)getDetailsForMessages:(unsigned int)arg1 absoluteBottom:(unsigned int)arg2 topOfDesiredRange:(unsigned int)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4 fromMailbox:(id)arg5;
- (id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 fromMailbox:(id)arg2;
- (struct sqlite3 { }*)getReaderDB;
- (struct sqlite3 { }*)getWriterDB;
- (int)handleSqliteError:(struct sqlite3 { }*)arg1 format:(id)arg2;
- (BOOL)hasCompleteDataForMimePart:(id)arg1;
- (id)headerDataAtPath:(id)arg1;
- (id)headerDataForMessage:(id)arg1;
- (id)hiddenPOPUIDsInMailbox:(id)arg1;
- (unsigned int)includesMeCountForMailbox:(id)arg1;
- (id)initWithPath:(id)arg1;
- (unsigned int)integerForQuery:(id)arg1 withTextArgument:(id)arg2;
- (void)invalidateAccount:(id)arg1;
- (void)invalidateAndWait;
- (BOOL)isMessageContentsLocallyAvailable:(id)arg1;
- (BOOL)isProtectedDataAvailable:(struct sqlite3 { }*)arg1;
- (void)iterateMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 handler:(id /* block */)arg3;
- (void)iterateMessagesMatchingCriterion:(id)arg1 withResultHandler:(id)arg2 options:(unsigned int)arg3 withMonitor:(id)arg4;
- (void)iterateStatement:(struct sqlite3_stmt { }*)arg1 db:(struct sqlite3 { }*)arg2 withProgressMonitor:(id)arg3 andRowHandler:(int (*)arg4 context:(void*)arg5;
- (int)libraryIDForAccount:(id)arg1;
- (id)loadData:(id)arg1 forMessage:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (int)loadMoreMessagesForThreadContainingMessage:(id)arg1 hasNoMoreMessages:(BOOL*)arg2;
- (unsigned int)mailboxIDForURLString:(id)arg1;
- (int)mailboxLocationOfMessageID:(unsigned int)arg1 usingDatabase:(struct sqlite3 { }*)arg2;
- (id)mailboxURLForMessage:(id)arg1;
- (id)mailboxUidForMessage:(id)arg1;
- (void)markOfflineCacheOperationAsComplete:(id)arg1;
- (unsigned int)maximumRemoteIDForMailbox:(id)arg1;
- (id)messageIdsForConversationId:(long long)arg1 limit:(unsigned int)arg2;
- (id)messageWithLibraryID:(unsigned int)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (id)messageWithMessageID:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 success:(BOOL*)arg4;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 success:(BOOL*)arg3;
- (id)messagesNeedingSyncConfirmationForMailbox:(id)arg1;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)messagesWithoutSummariesForMailbox:(id)arg1;
- (id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)metadataForMessage:(id)arg1;
- (id)metadataForMessage:(id)arg1 key:(id)arg2;
- (BOOL)migrate;
- (unsigned int)minimumRemoteIDForMailbox:(id)arg1;
- (id)newConnectionForConnectionPool:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3;
- (void)notifyConversation:(long long)arg1 hasMergedIntoConversation:(long long)arg2;
- (void)notifyNewDataAvailableForMessages:(id)arg1;
- (id)offlineCacheOperationsForAccount:(int)arg1 lastTemporaryID:(unsigned int*)arg2;
- (long long)oldestKnownConversationInMailbox:(id)arg1;
- (id)oldestMessageInMailbox:(id)arg1;
- (id)orderedBatchOfMessagesEndingAtRowId:(unsigned int)arg1 limit:(unsigned int)arg2 success:(BOOL*)arg3;
- (id)pathForMailboxURL:(id)arg1;
- (void)performReadTransaction:(id /* block */)arg1;
- (void)performWriteTransaction:(id /* block */)arg1;
- (struct sqlite3_stmt { }*)preparedStatement:(struct sqlite3 { }*)arg1 pattern:(id)arg2;
- (int)protectedDataAvailability;
- (void)pruneConversationTables:(double)arg1;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 { }*)arg2 options:(unsigned int)arg3;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 { }*)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 { }*)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(BOOL)arg5;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 { }*)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(BOOL)arg5 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 { }*)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)rebuildActiveAccountsClauseWithAccounts:(id)arg1;
- (id)referencesFromHeaders:(id)arg1;
- (id)remoteStoreForMessage:(id)arg1;
- (void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(BOOL)arg2 andNotify:(BOOL)arg3;
- (void)removeSearchableItemsForAccount:(id)arg1;
- (void)removeSearchableItemsForAccount:(id)arg1 mailboxID:(unsigned int)arg2;
- (void)removeSearchableItemsForMailbox:(id)arg1;
- (void)removeSearchableItemsForMessages:(id)arg1;
- (void)removeSearchableItemsWithLibraryIDs:(id)arg1;
- (BOOL)renameMailboxes:(id)arg1 to:(id)arg2;
- (void)renameOrRemoveDatabase;
- (int)rollbackTransaction:(struct sqlite3 { }*)arg1;
- (id)searchableIndex:(id)arg1 assignTransaction:(long long)arg2 updates:(id)arg3;
- (void)searchableIndex:(id)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
- (void)sendMessagesForStatement:(struct sqlite3_stmt { }*)arg1 db:(struct sqlite3 { }*)arg2 to:(id)arg3 options:(unsigned int)arg4 timestamp:(unsigned long long)arg5;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 success:(BOOL*)arg6;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)sendMessagesMatchingQuery:(const char *)arg1 db:(struct sqlite3 { }*)arg2 to:(id)arg3 options:(unsigned int)arg4;
- (id)sequenceIdentifierForMailbox:(id)arg1;
- (id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2;
- (id)serverSearchResultMessagesForMailbox:(id)arg1;
- (unsigned int)serverUnreadOnlyOnServerCountForMailbox:(id)arg1;
- (void)setConversationInfo:(long long)arg1 syncKey:(id)arg2 flags:(unsigned long long)arg3;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(BOOL)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFlags:(unsigned long long)arg1 forConversationId:(long long)arg2;
- (void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2;
- (void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2;
- (void)setMailboxPathProvider:(id)arg1;
- (void)setMessage:(id)arg1 isPartial:(BOOL)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(unsigned int)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3;
- (void)setServerUnreadOnlyOnServerCount:(unsigned int)arg1 forMailbox:(id)arg2;
- (void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2;
- (void)setSummary:(id)arg1 forMessage:(id)arg2;
- (BOOL)shouldCancel;
- (void)startSuspendTimer;
- (id)storedIntegerPropertyWithName:(id)arg1;
- (id)stringForQuery:(id)arg1;
- (id)stringForQuery:(id)arg1 monitor:(id)arg2;
- (id)syncedConversations;
- (unsigned int)totalCountForMailbox:(id)arg1;
- (void)unlockDB:(struct sqlite3 { }*)arg1;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)arg1 matchingCriterion:(id)arg2;
- (unsigned int)unreadCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2;
- (void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg1 externalConversationID:(long long)arg2;
- (id)updateFlagsForMessages:(id)arg1 changes:(id)arg2 transformer:(id /* block */)arg3;
- (void)updateFlagsForMessagesInPlace:(id)arg1 success:(BOOL*)arg2;
- (void)updateMessage:(id)arg1 withMetadata:(id /* block */)arg2;
- (void)updateRecipientsForMessage:(id)arg1 fromHeaders:(id)arg2;
- (void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2;
- (id)updatesForSearchableIndex:(id)arg1 count:(unsigned int)arg2;
- (id)urlForMailboxID:(unsigned int)arg1;
- (void)vacuumDataForObsoleteAccountURLString:(id)arg1;
- (unsigned int)verifyRepresentativeSampleForSearchableIndex:(id)arg1;

@end
