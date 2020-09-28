/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:35:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, CTDataConnectionAvailabilityStatus, CTDataConnectionStatus, CTXPCServiceSubscriptionContext;

@interface CTTetheringStatus : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _carrierEnabled;
	NSNumber* _userAuthenticated;
	NSNumber* _asserted;
	NSNumber* _activationFailure;
	NSNumber* _misPdpMaxHosts;
	CTDataConnectionAvailabilityStatus* _connectionAvailabilityStatus;
	CTDataConnectionStatus* _connectionStatus;
	CTXPCServiceSubscriptionContext* _context;

}

@property (nonatomic,retain) NSNumber * carrierEnabled;                                                      //@synthesize carrierEnabled=_carrierEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * userAuthenticated;                                                   //@synthesize userAuthenticated=_userAuthenticated - In the implementation block
@property (nonatomic,retain) NSNumber * asserted;                                                            //@synthesize asserted=_asserted - In the implementation block
@property (nonatomic,retain) NSNumber * activationFailure;                                                   //@synthesize activationFailure=_activationFailure - In the implementation block
@property (nonatomic,retain) NSNumber * misPdpMaxHosts;                                                      //@synthesize misPdpMaxHosts=_misPdpMaxHosts - In the implementation block
@property (nonatomic,retain) CTDataConnectionAvailabilityStatus * connectionAvailabilityStatus;              //@synthesize connectionAvailabilityStatus=_connectionAvailabilityStatus - In the implementation block
@property (nonatomic,retain) CTDataConnectionStatus * connectionStatus;                                      //@synthesize connectionStatus=_connectionStatus - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;                                      //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setConnectionStatus:(CTDataConnectionStatus *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CTDataConnectionStatus *)connectionStatus;
-(NSNumber *)carrierEnabled;
-(void)setCarrierEnabled:(NSNumber *)arg1 ;
-(NSNumber *)asserted;
-(NSNumber *)misPdpMaxHosts;
-(void)setUserAuthenticated:(NSNumber *)arg1 ;
-(void)setAsserted:(NSNumber *)arg1 ;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(NSNumber *)activationFailure;
-(id)initWithCoder:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)context;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)userAuthenticated;
-(void)setConnectionAvailabilityStatus:(CTDataConnectionAvailabilityStatus *)arg1 ;
-(id)description;
-(CTDataConnectionAvailabilityStatus *)connectionAvailabilityStatus;
-(void)setActivationFailure:(NSNumber *)arg1 ;
-(void)setMisPdpMaxHosts:(NSNumber *)arg1 ;
@end
