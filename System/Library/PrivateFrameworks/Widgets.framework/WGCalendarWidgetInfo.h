/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <Widgets/WGWidgetInfo.h>

@class NSDate;

@interface WGCalendarWidgetInfo : WGWidgetInfo {

	NSDate* _date;

}

@property (setter=_setDate:,nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(BOOL)isCalendarExtension:(id)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(void)_handleSignificantTimeChange:(id)arg1 ;
-(NSDate *)date;
-(void)_resetIconsImpl;
-(id)_queue_iconWithSize:(CGSize)arg1 scale:(double)arg2 forWidgetWithIdentifier:(id)arg3 extension:(id)arg4 ;
-(id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2 ;
-(void)_setDate:(id)arg1 ;
@end

