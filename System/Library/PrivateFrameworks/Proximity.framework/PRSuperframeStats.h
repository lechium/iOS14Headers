/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Proximity/Proximity-Structs.h>
@interface PRSuperframeStats : NSObject {

	shared_ptr<rose::ResponderSuperframeStats>* _stats;

}

@property (readonly) ResponderSuperframeStats stats; 
-(ResponderSuperframeStats)stats;
-(id)initWithStats:(const ResponderSuperframeStats*)arg1 ;
@end
