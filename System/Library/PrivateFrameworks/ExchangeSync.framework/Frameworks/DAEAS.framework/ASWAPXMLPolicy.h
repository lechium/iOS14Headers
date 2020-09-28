/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASPolicy.h>

@class NSString;

@interface ASWAPXMLPolicy : ASPolicy {

	NSString* _data;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)data;
-(void)_setData:(id)arg1 ;
-(id)_policyForWAPProvisioningXMLData;
-(id)_wbxmlPolicyDict;
-(id)perDomainDictsForPolicy;
@end
