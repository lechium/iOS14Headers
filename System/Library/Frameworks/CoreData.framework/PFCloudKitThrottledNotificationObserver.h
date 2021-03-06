/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PFCloudKitThrottledNotificationObserver : NSObject {

	Ai _notificationIteration;
	NSString* _assertionLabel;
	NSString* _label;
	long long _notificationStalenessInterval;
	/*^block*/id _notificationHandlerBlock;

}

@property (nonatomic,retain) NSString * label;                                     //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long notificationStalenessInterval;              //@synthesize notificationStalenessInterval=_notificationStalenessInterval - In the implementation block
@property (nonatomic,copy) id notificationHandlerBlock;                            //@synthesize notificationHandlerBlock=_notificationHandlerBlock - In the implementation block
-(id)initWithLabel:(id)arg1 ;
-(void)dealloc;
-(void)noteRecievedNotification:(id)arg1 ;
-(id)notificationHandlerBlock;
-(void)setNotificationStalenessInterval:(long long)arg1 ;
-(void)setNotificationHandlerBlock:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(long long)notificationStalenessInterval;
@end

