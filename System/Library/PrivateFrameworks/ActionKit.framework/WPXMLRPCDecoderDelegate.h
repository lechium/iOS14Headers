/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableArray, NSString;

@interface WPXMLRPCDecoderDelegate : NSObject <NSXMLParserDelegate> {

	WPXMLRPCDecoderDelegate* myParent;
	NSMutableArray* myChildren;
	int myElementType;
	NSString* myElementKey;
	id myElementValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setParent:(id)arg1 ;
-(id)parseData:(id)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(id)parent;
-(id)parseString:(id)arg1 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(int)elementType;
-(void)setElementValue:(id)arg1 ;
-(id)elementValue;
-(void)setElementType:(int)arg1 ;
-(void)setElementKey:(id)arg1 ;
-(id)elementKey;
-(BOOL)isDictionaryElementType:(int)arg1 ;
-(id)parseInteger:(id)arg1 ;
-(id)parseDouble:(id)arg1 ;
-(id)parseBoolean:(id)arg1 ;
-(id)parseDate:(id)arg1 ;
-(void)addElementValueToParent;
-(id)parseDateString:(id)arg1 withFormat:(id)arg2 ;
@end

