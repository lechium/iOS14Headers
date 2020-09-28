/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NRDeviceProperties : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _pairingProtocolVersion;

}

@property (assign,nonatomic) unsigned long long pairingProtocolVersion;              //@synthesize pairingProtocolVersion=_pairingProtocolVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)pairingProtocolVersion;
-(id)description;
-(void)setPairingProtocolVersion:(unsigned long long)arg1 ;
@end
