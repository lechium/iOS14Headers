/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFVolumeButtonManager : NSObject {

	/*^block*/id _pressHandler;

}

@property (nonatomic,copy) id pressHandler;              //@synthesize pressHandler=_pressHandler - In the implementation block
-(void)dealloc;
-(id)initWithPressHandler:(/*^block*/id)arg1 ;
-(void)volumeButtonPressed;
-(id)pressHandler;
-(void)setPressHandler:(id)arg1 ;
@end
