/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFDialogAttribution, NSString;

@interface WFDialogRequest : NSObject <NSSecureCoding> {

	WFDialogAttribution* _attribution;
	NSString* _prompt;

}

@property (nonatomic,readonly) WFDialogAttribution * attribution;              //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,copy,readonly) NSString * prompt;                         //@synthesize prompt=_prompt - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)prompt;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(WFDialogAttribution *)attribution;
-(id)initWithAppBundleIdentifier:(id)arg1 prompt:(id)arg2 ;
-(id)initWithAttribution:(id)arg1 prompt:(id)arg2 ;
@end

