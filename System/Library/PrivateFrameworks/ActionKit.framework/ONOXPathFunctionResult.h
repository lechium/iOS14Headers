/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSNumber, NSString;

@interface ONOXPathFunctionResult : NSObject {

	xmlXPathObject* _xmlXPath;

}

@property (assign,nonatomic) xmlXPathObject* xmlXPath;                   //@synthesize xmlXPath=_xmlXPath - In the implementation block
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) double numericValue; 
@property (nonatomic,copy,readonly) NSNumber * numberValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
-(NSNumber *)numberValue;
-(BOOL)boolValue;
-(void)dealloc;
-(NSString *)stringValue;
-(double)numericValue;
-(xmlXPathObject*)xmlXPath;
-(void)setXmlXPath:(xmlXPathObject*)arg1 ;
@end

