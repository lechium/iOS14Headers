/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXDOMModificationContext.h>
@class SXLayoutOptions, NSString;


@protocol SXDOMModificationContext <NSObject>
@property (nonatomic,readonly) SXLayoutOptions * layoutOptions; 
@property (nonatomic,readonly) NSString * specVersion; 
@required
-(SXLayoutOptions *)layoutOptions;
-(NSString *)specVersion;

@end


@class SXLayoutOptions, NSString;

@interface SXDOMModificationContext : NSObject <SXDOMModificationContext> {

	SXLayoutOptions* _layoutOptions;
	NSString* _specVersion;

}

@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) NSString * specVersion;                       //@synthesize specVersion=_specVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXLayoutOptions *)layoutOptions;
-(NSString *)specVersion;
-(id)initWithLayoutOptions:(id)arg1 specVersion:(id)arg2 ;
@end

