/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUserActivity;

@interface NPKContinuityCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserActivity* _provisionPassUserActivity;
	NSUserActivity* _getPaymentPassesUserActivity;
	NSUserActivity* _passListUserActivity;
	NSUserActivity* _individualPassUserActivity;
	NSUserActivity* _setUpPeerPaymentUserActivity;
	NSUserActivity* _viewPeerPaymentUserActivity;
	NSUserActivity* _currentUserActivity;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSUserActivity * provisionPassUserActivity;                 //@synthesize provisionPassUserActivity=_provisionPassUserActivity - In the implementation block
@property (nonatomic,retain) NSUserActivity * getPaymentPassesUserActivity;              //@synthesize getPaymentPassesUserActivity=_getPaymentPassesUserActivity - In the implementation block
@property (nonatomic,retain) NSUserActivity * passListUserActivity;                      //@synthesize passListUserActivity=_passListUserActivity - In the implementation block
@property (nonatomic,retain) NSUserActivity * individualPassUserActivity;                //@synthesize individualPassUserActivity=_individualPassUserActivity - In the implementation block
@property (nonatomic,retain) NSUserActivity * setUpPeerPaymentUserActivity;              //@synthesize setUpPeerPaymentUserActivity=_setUpPeerPaymentUserActivity - In the implementation block
@property (nonatomic,retain) NSUserActivity * viewPeerPaymentUserActivity;               //@synthesize viewPeerPaymentUserActivity=_viewPeerPaymentUserActivity - In the implementation block
@property (assign,nonatomic,__weak) NSUserActivity * currentUserActivity;                //@synthesize currentUserActivity=_currentUserActivity - In the implementation block
+(id)sharedContinuityCoordinator;
-(NSUserActivity *)currentUserActivity;
-(void)dealloc;
-(id)_init;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCurrentUserActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)passListUserActivity;
-(void)setPassListUserActivity:(NSUserActivity *)arg1 ;
-(void)_saveUserActivity:(id)arg1 ;
-(NSUserActivity *)provisionPassUserActivity;
-(id)_skeletonBridgeUserActivity;
-(void)setProvisionPassUserActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)individualPassUserActivity;
-(void)setIndividualPassUserActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)getPaymentPassesUserActivity;
-(void)setGetPaymentPassesUserActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)setUpPeerPaymentUserActivity;
-(void)setSetUpPeerPaymentUserActivity:(NSUserActivity *)arg1 ;
-(NSUserActivity *)viewPeerPaymentUserActivity;
-(void)setViewPeerPaymentUserActivity:(NSUserActivity *)arg1 ;
-(void)userViewingPassList;
-(void)userViewingPassWithUniqueID:(id)arg1 isPaymentPass:(BOOL)arg2 ;
-(void)userNeedsToProvisionPassWithUniqueID:(id)arg1 ;
-(void)userNeedsPaymentPasses;
-(void)userNeedsToSetUpPeerPayment;
-(void)userNeedsToViewPeerPaymentForHandle:(id)arg1 ;
-(id)userActivityForPassWithUniqueID:(id)arg1 ;
-(void)invalidateAllActivities;
@end
