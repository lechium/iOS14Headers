/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Proximity/Proximity-Structs.h>
@interface PRSharingSessionHelper : NSObject
+(id)UUIDToNSDataMac:(id)arg1 len:(unsigned long long)arg2 ;
+(id)UUIDStringToNSDataMac:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 len:(unsigned long long)arg2 ;
+(id)HexStringToNSDataMac:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
+(id)NSDataMacToUUID:(id)arg1 ;
+(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)UIntToHexString:(unsigned long long)arg1 len:(unsigned long long)arg2 ;
+(unsigned long long)NSDataToUInt64:(id)arg1 ;
+(id)convertMacStringToNSData:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 ;
+(id)reverseNSData:(id)arg1 ;
+(int)ProxToCoarseRange:(long long)arg1 ;
+(id)ProxToString:(long long)arg1 ;
+(long long)CoarseRangeToProx:(int)arg1 ;
@end

