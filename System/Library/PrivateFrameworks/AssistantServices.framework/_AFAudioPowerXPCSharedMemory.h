/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _AFAudioPowerXPCSharedMemory : NSObject {

	unsigned long long _mappedLength;
	void* _sharedRegion;

}

@property (nonatomic,readonly) float averagePower; 
@property (nonatomic,readonly) float peakPower; 
-(float)peakPower;
-(void)dealloc;
-(void)_destroyMapping;
-(id)initWithXPCObject:(id)arg1 ;
-(float)averagePower;
@end

