/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKClassKitChangeNotifierDelegate, CRKClassKitRosterRequirements;
@class NSObject;

@interface CRKClassKitChangeNotifier : NSObject {

	id<CRKClassKitChangeNotifierDelegate> _delegate;
	NSObject*<CRKClassKitRosterRequirements> _requirements;
	id _observerToken;

}

@property (nonatomic,readonly) NSObject*<CRKClassKitRosterRequirements> requirements;              //@synthesize requirements=_requirements - In the implementation block
@property (nonatomic,retain) id observerToken;                                                     //@synthesize observerToken=_observerToken - In the implementation block
@property (assign,nonatomic,__weak) id<CRKClassKitChangeNotifierDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(NSObject*<CRKClassKitRosterRequirements>)requirements;
-(void)dealloc;
-(void)setObserverToken:(id)arg1 ;
-(void)setDelegate:(id<CRKClassKitChangeNotifierDelegate>)arg1 ;
-(id<CRKClassKitChangeNotifierDelegate>)delegate;
-(id)observerToken;
-(id)initWithRequirements:(id)arg1 ;
-(void)dataChanged;
-(void)stopObservingRequirements;
-(void)startObservingRequirements;
@end
