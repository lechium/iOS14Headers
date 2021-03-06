/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class NSString, NSURL;

@interface WBSParsecPunchout : WBSParsecModel {

	NSString* _name;
	NSString* _bundleID;
	NSString* _punchoutLabel;
	NSURL* _punchoutURL;
	NSURL* _installURL;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * punchoutLabel;              //@synthesize punchoutLabel=_punchoutLabel - In the implementation block
@property (nonatomic,readonly) NSURL * punchoutURL;                        //@synthesize punchoutURL=_punchoutURL - In the implementation block
@property (nonatomic,readonly) NSURL * installURL;                         //@synthesize installURL=_installURL - In the implementation block
+(id)schema;
-(NSString *)punchoutLabel;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSString *)bundleID;
-(NSURL *)punchoutURL;
-(NSURL *)installURL;
@end

