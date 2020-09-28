/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFServiceBuilder;

@interface HUServiceIconPickerItemManager : HFItemManager {

	HFServiceBuilder* _serviceBuilder;

}

@property (nonatomic,readonly) HFServiceBuilder * serviceBuilder;              //@synthesize serviceBuilder=_serviceBuilder - In the implementation block
-(id)_serviceType;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(HFServiceBuilder *)serviceBuilder;
-(id)initWithServiceBuilder:(id)arg1 delegate:(id)arg2 ;
@end
