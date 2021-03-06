/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterWANFirewallRuleList : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _portRules;
	NSMutableArray* _icmpRules;

}

@property (nonatomic,retain) NSMutableArray * portRules;              //@synthesize portRules=_portRules - In the implementation block
@property (nonatomic,retain) NSMutableArray * icmpRules;              //@synthesize icmpRules=_icmpRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)serializeWithError:(id*)arg1 ;
-(NSMutableArray *)portRules;
-(void)setPortRules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)icmpRules;
-(void)setIcmpRules:(NSMutableArray *)arg1 ;
-(id)initWithPortRules:(id)arg1 icmpRules:(id)arg2 ;
@end

