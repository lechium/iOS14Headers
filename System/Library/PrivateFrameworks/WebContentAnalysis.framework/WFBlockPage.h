/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface WFBlockPage : NSObject {

	NSURL* pageTemplateURL;
	NSString* userVisibleURLString;
	NSString* formActionURLString;
	NSString* preferredLanguage;

}

@property (readonly) NSURL * pageTemplateURL; 
@property (retain) NSString * userVisibleURLString; 
@property (retain) NSString * formActionURLString; 
-(id)_css;
-(id)page;
-(void)dealloc;
-(NSURL *)pageTemplateURL;
-(NSString *)userVisibleURLString;
-(void)setUserVisibleURLString:(NSString *)arg1 ;
-(id)_initWithUsername:(id)arg1 fileName:(id)arg2 ;
-(id)_fileContentWithName:(id)arg1 extension:(id)arg2 ;
-(id)_blockpage;
-(id)initNoOveridePageWithUsername:(id)arg1 ;
-(id)initWithUsername:(id)arg1 overridesAllowded:(BOOL)arg2 ;
-(NSString *)formActionURLString;
-(void)setFormActionURLString:(NSString *)arg1 ;
@end

