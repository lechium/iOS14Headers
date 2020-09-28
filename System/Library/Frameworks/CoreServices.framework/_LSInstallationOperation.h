/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:27:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _LSInstallationOperation : NSObject {

	NSString* _bundleID;
	long long _installType;
	/*^block*/id _block;
	BOOL _claimed;

}

@property (nonatomic,readonly) NSString * bundleID;                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) long long installType;              //@synthesize installType=_installType - In the implementation block
@property (nonatomic,readonly) id block;                           //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL claimed;                         //@synthesize claimed=_claimed - In the implementation block
-(BOOL)claimed;
-(id)redactedDescription;
-(long long)installType;
-(void)setClaimed:(BOOL)arg1 ;
-(id)initWithBundleID:(id)arg1 installType:(long long)arg2 block:(/*^block*/id)arg3 ;
-(id)block;
-(NSString *)bundleID;
-(id)description;
@end
