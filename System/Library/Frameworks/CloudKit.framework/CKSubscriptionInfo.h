/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKSubscription, CKDatabase, CKContainer;

@interface CKSubscriptionInfo : NSObject {

	CKSubscription* _subscription;
	CKDatabase* _database;
	CKContainer* _container;
	/*^block*/id _handler;

}

@property (nonatomic,retain) CKSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) CKDatabase * database;                      //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) CKContainer * container;                    //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) id handler;                                   //@synthesize handler=_handler - In the implementation block
-(void)setSubscription:(CKSubscription *)arg1 ;
-(CKSubscription *)subscription;
-(CKDatabase *)database;
-(void)setHandler:(id)arg1 ;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(void)setContainer:(CKContainer *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)handler;
-(unsigned long long)hash;
-(CKContainer *)container;
-(id)description;
@end

