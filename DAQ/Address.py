"""
This class holds the address data for the channels.
"""
class Address:

    def __init__(self, serialNumber, hubPort, channel, isHubPort):
        self.serialNumber = serialNumber
        self.hubPort = hubPort
        self.channel = channel
        self.isHubPort = isHubPort

    def __str__(self):
        return f"{self.serialNumber}-{self.hubPort}-{self.channel}-{self.isHubPort}"