/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SOAuthorizationHintsCore : NSObject <NSSecureCoding> {

	NSString* _localizedExtensionBundleDisplayName;

}

@property (nonatomic,readonly) NSString * localizedExtensionBundleDisplayName;              //@synthesize localizedExtensionBundleDisplayName=_localizedExtensionBundleDisplayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedExtensionBundleDisplayName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithLocalizedExtensionBundleDisplayName:(id)arg1 ;
@end

