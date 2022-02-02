
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 02 Feb 2022 19:58:43 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorGrayscaleBlack,
ColorGrayscaleGray400,
ColorGrayscaleGray500,
ColorGrayscaleGray600,
ColorGrayscaleGray700,
ColorGrayscaleGray800,
ColorGrayscaleWhite,
ColorGrayscaleGray100,
ColorGrayscaleGray200,
ColorGrayscaleGray300,
ColorSupportSuccess,
ColorSupportError,
ColorSupportAlert,
ColorAccentAccent,
ColorPrimaryInteractivity,
ColorPrimaryShade1,
ColorPrimaryShade2,
ColorPrimaryShade3,
ColorPrimaryBrand,
ColorSecondarySecondary1,
ColorSecondarySecondary2
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
