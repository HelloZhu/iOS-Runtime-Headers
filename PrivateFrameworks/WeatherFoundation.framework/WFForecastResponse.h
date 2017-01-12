/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFForecastResponse : WFResponse <NSSecureCoding> {
    WFWeatherConditions * _forecast;
    unsigned int  _forecastType;
    NSData * _rawAPIData;
    BOOL  _responseWasFromCache;
}

@property (nonatomic, retain) WFWeatherConditions *forecast;
@property (nonatomic) unsigned int forecastType;
@property (nonatomic, retain) NSData *rawAPIData;
@property (nonatomic) BOOL responseWasFromCache;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)forecast;
- (unsigned int)forecastType;
- (id)initWithCoder:(id)arg1;
- (id)rawAPIData;
- (BOOL)responseWasFromCache;
- (void)setForecast:(id)arg1;
- (void)setForecastType:(unsigned int)arg1;
- (void)setRawAPIData:(id)arg1;
- (void)setResponseWasFromCache:(BOOL)arg1;

@end