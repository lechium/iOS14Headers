/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class CKTextKitEntityAttribute;

@interface CKTextKitTextCheckingResult : NSTextCheckingResult {

	NSRange _rangeOverride;
	unsigned long long _resultTypeOverride;
	CKTextKitEntityAttribute* _entityAttribute;

}

@property (nonatomic,readonly) CKTextKitEntityAttribute * entityAttribute;              //@synthesize entityAttribute=_entityAttribute - In the implementation block
-(NSRange)range;
-(unsigned long long)resultType;
-(id)initWithType:(unsigned long long)arg1 entityAttribute:(id)arg2 range:(NSRange)arg3 ;
-(CKTextKitEntityAttribute *)entityAttribute;
@end
