/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTPingSubscribing.h>

@class NSXPCConnection, NSString;

@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionIDs;
-(id)subscriptionInfos;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connection;
-(void)pingSubscriberDidLoad;
-(void)dealloc;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(id)initWithConnection:(id)arg1 ;
-(id)sectionIDsForBulletins;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(/*^block*/id)arg3 ;
-(id)init;
-(void)pingWithBulletin:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end
