/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMTone.h>

@interface AXMSinglePitchTone : AXMTone
-(id)initWithFrequency:(double)arg1 sampleRate:(double)arg2 envelope:(id)arg3 ;
-(id)initWithSampleRate:(double)arg1 envelope:(id)arg2 ;
-(void)renderInBuffer:(vector<int, std::__1::allocator<int> >*)arg1 atFrame:(unsigned long long)arg2 ;
@end

