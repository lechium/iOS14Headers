/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:23 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@interface TSCH3DFrustumRect : NSObject {

	float _left;
	float _right;
	float _bottom;
	float _top;

}

@property (nonatomic,readonly) float left;                //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) float right;               //@synthesize right=_right - In the implementation block
@property (nonatomic,readonly) float bottom;              //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,readonly) float top;                 //@synthesize top=_top - In the implementation block
+(id)rectWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4 ;
-(float)top;
-(box<glm::detail::tvec2<float> >)toBox;
-(float)left;
-(float)right;
-(float)bottom;
-(id)initWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4 ;
@end

