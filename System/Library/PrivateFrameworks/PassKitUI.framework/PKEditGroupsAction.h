/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKEditGroupsAction : NSObject {

	NSString* _actionLabel;
	NSString* _actionType;

}

@property (nonatomic,retain) NSString * actionLabel;              //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,retain) NSString * actionType;               //@synthesize actionType=_actionType - In the implementation block
-(NSString *)actionType;
-(NSString *)actionLabel;
-(void)setActionLabel:(NSString *)arg1 ;
-(void)setActionType:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 type:(id)arg2 ;
@end
