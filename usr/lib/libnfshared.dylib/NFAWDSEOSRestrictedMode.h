/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCSEOSRestrictedModeEvent, NSString;

@interface NFAWDSEOSRestrictedMode : NSObject <NFAWDEventProtocol> {

	AWDNFCSEOSRestrictedModeEvent* _metric;

}

@property (nonatomic,retain) AWDNFCSEOSRestrictedModeEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMetric:(AWDNFCSEOSRestrictedModeEvent *)arg1 ;
-(AWDNFCSEOSRestrictedModeEvent *)metric;
-(id)getMetric;
-(id)init;
-(unsigned)getMetricId;
-(void)updateExceptionUUID:(id)arg1 ;
@end

