/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCAccountSession, NSMutableDictionary, NSMapTable;

@interface BRCDownloadTrackers : NSObject {

	BRCAccountSession* _session;
	NSMutableDictionary* _trackersByDocID;
	NSMapTable* _docIDsByTracker;

}
-(id)initWithSession:(id)arg1 ;
-(void)addDownloadTracker:(id)arg1 forItemWithDocID:(id)arg2 ;
-(void)removeDownloadTracker:(id)arg1 ;
-(void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2 ;
-(unsigned long long)spaceRequiredForTrackers;
-(BOOL)hasPendingTrackerForDocumentID:(id)arg1 ;
@end

