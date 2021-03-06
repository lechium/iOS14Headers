/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class IDSCKServerChangeToken;

@interface IDSCloudKitTransportLogChangeToken : NSObject <NSSecureCoding> {

	IDSCKServerChangeToken* _ckToken;

}

@property (nonatomic,retain) IDSCKServerChangeToken * ckToken;              //@synthesize ckToken=_ckToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCKToken:(id)arg1 ;
-(IDSCKServerChangeToken *)ckToken;
-(void)setCkToken:(IDSCKServerChangeToken *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

