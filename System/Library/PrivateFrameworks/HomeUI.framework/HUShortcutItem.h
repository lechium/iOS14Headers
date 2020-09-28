/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFTriggerBuilder;

@interface HUShortcutItem : HFItem <NSCopying> {

	BOOL _selectable;
	HFTriggerBuilder* _triggerBuilder;

}

@property (nonatomic,readonly) BOOL selectable;                                //@synthesize selectable=_selectable - In the implementation block
@property (nonatomic,readonly) HFTriggerBuilder * triggerBuilder;              //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTriggerBuilder:(id)arg1 selectable:(BOOL)arg2 ;
-(BOOL)selectable;
-(id)init;
-(HFTriggerBuilder *)triggerBuilder;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end
