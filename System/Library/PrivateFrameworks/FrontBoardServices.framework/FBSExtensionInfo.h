/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSBundleInfo.h>

@class NSString;

@interface FBSExtensionInfo : FBSBundleInfo {

	NSString* _typeIdentifier;
	NSString* _extensionIdentifier;

}

@property (nonatomic,copy,readonly) NSString * typeIdentifier;                   //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
-(id)_initWithPlugInKitProxy:(id)arg1 ;
-(NSString *)typeIdentifier;
-(NSString *)extensionIdentifier;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(id)_initWithBundleProxy:(id)arg1 url:(id)arg2 ;
@end
