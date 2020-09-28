/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCMiddlewareExceptionEvent, NSData, NSString;

@interface NFAWDMiddlewareException : NSObject <NFAWDEventProtocol> {

	unsigned _version;
	unsigned _hardwareType;
	unsigned _type;
	unsigned _errorCode;
	AWDNFCMiddlewareExceptionEvent* _metric;

}

@property (assign,nonatomic) unsigned version;                                     //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned hardwareType;                                //@synthesize hardwareType=_hardwareType - In the implementation block
@property (assign,nonatomic) unsigned type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSData * breadcrumb; 
@property (nonatomic,retain) AWDNFCMiddlewareExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)version;
-(unsigned)hardwareType;
-(void)setMetric:(AWDNFCMiddlewareExceptionEvent *)arg1 ;
-(AWDNFCMiddlewareExceptionEvent *)metric;
-(void)setVersion:(unsigned)arg1 ;
-(id)getMetric;
-(void)setErrorCode:(unsigned)arg1 ;
-(id)init;
-(unsigned)getMetricId;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(unsigned)errorCode;
-(void)setHardwareType:(unsigned)arg1 ;
-(void)setBreadcrumb:(NSData *)arg1 ;
-(NSData *)breadcrumb;
-(void)updateExceptionUUID:(id)arg1 ;
@end
