/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
#import <libobjc.A.dylib/WFWebPageProtocol.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface WFTreeXMLDocumentStripper : NSObject <WFWebPageProtocol> {

	xmlDoc* xmlDocument;
	NSString* pageTitle;
	NSMutableDictionary* metaTagsLabeled;
	NSMutableArray* metaTagsUnlabeled;
	NSMutableArray* scriptBlocks;
	NSMutableArray* images;
	NSString* pageContent;
	NSMutableArray* links;
	BOOL hasFrameset;
	BOOL hasShortRefresh;

}
+(id)treeStripperWithXMLDocument:(xmlDoc*)arg1 ;
-(id)links;
-(id)images;
-(id)URLString;
-(void)strip;
-(void)dealloc;
-(void)setPageTitle:(id)arg1 ;
-(id)pageTitle;
-(id)pageContent;
-(id)description;
-(id)initWithXMLDocument:(xmlDoc*)arg1 ;
-(void)setXMLDocument:(xmlDoc*)arg1 ;
-(void)processXMLDocument:(xmlDoc*)arg1 ;
-(id)processXMLDocument:(xmlDoc*)arg1 blockComments:(BOOL)arg2 ;
-(id)metaTagDescription;
-(id)metaTagKeywords;
-(id)metaTagsLabeled;
-(id)metaTagsUnlabeled;
-(id)scriptBlocks;
-(BOOL)hasFrameset;
-(BOOL)hasShortRefresh;
-(id)metaTagRating;
@end

