/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDisplayConfigurationRequest : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _overscanCompensation;
	CGSize _nativePixelSize;
	double _refreshRate;
	long long _hdrMode;

}

@property (nonatomic,readonly) long long overscanCompensation;              //@synthesize overscanCompensation=_overscanCompensation - In the implementation block
@property (nonatomic,readonly) CGSize nativePixelSize;                      //@synthesize nativePixelSize=_nativePixelSize - In the implementation block
@property (nonatomic,readonly) double refreshRate;                          //@synthesize refreshRate=_refreshRate - In the implementation block
@property (nonatomic,readonly) long long hdrMode;                           //@synthesize hdrMode=_hdrMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)hdrMode;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)refreshRate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(CGSize)nativePixelSize;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(long long)overscanCompensation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)hash;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end

